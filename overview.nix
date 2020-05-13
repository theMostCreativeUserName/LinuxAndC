let
pkgs = import <nixpkgs> {};
  mkDerivation = import ./autotools.nix pkgs;
  in mkDerivation {
    name = "overview";
    src = ./cOverview/Calculator.c;
  }
