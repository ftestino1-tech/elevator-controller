ThisBuild / scalaVersion := "2.13.12"
ThisBuild / version      := "0.1.0"

lazy val root = (project in file("."))
  .settings(
    name := "mxfp4-spinal",
    libraryDependencies ++= Seq(
      "com.github.spinalhdl" %% "spinalhdl-core" % "1.10.2",
      "com.github.spinalhdl" %% "spinalhdl-lib"  % "1.10.2",
      "org.scalatest"        %% "scalatest"       % "3.2.17" % Test
    ),
    scalacOptions ++= Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature"
    ),
    addCompilerPlugin(
      "com.github.spinalhdl" % "spinalhdl-idsl-plugin_2.13" % "1.10.2"
    )
  )
