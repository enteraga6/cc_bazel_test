set -euo pipefail

mkdir binaries

bazel build ${{ inputs.flags }} ${{ inputs.targets }}

echo "built correctly"

IFS=' ' read -r -a targets <<< "${{ inputs.targets }}"
for TARGET in "${targets[@]}"; do
  echo "start loop"
  CD_PATH=${TARGET%:*}
  echo "took off colon"
  CD_PATH=${CD_PATH////}
  echo "took off slanted"
  BINARY_NAME=${TARGET#*:}
  cp "bazel-bin/$CD_PATH/$BINARY_NAME" ./binaries
done
