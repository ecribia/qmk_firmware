{pkgs ? import <nixpkgs> {}}: let
  pythonEnv = pkgs.python3.withPackages (ps:
    with ps; [
      platformdirs
      argcomplete
      colorama
      dotty-dict
      hid
      hjson
      jsonschema
      milc
      pygments
      pyserial
      pyusb
      pillow
    ]);
in
  pkgs.mkShell {
    buildInputs = [
      pkgs.qmk
      pythonEnv
    ];

    shellHook = ''
      echo "QMK + Python environment ready."
    '';
  }
