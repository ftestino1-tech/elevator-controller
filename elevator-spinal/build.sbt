ThisBuild / scalaVersion := "2.13.12"
ThisBuild / version      := "0.1.0"

lazy val root = (project in file("."))
  .settings(
    name := "elevator-spinal",
    libraryDependencies ++= Seq(
      "com.github.spinalhdl" %% "spinalhdl-core" % "1.10.1",
      "com.github.spinalhdl" %% "spinalhdl-sim"  % "1.10.1",
      "com.github.spinalhdl" %% "spinalhdl-lib"  % "1.10.1"
    ),
    scalacOptions += "-language:reflectiveCalls"
  )
