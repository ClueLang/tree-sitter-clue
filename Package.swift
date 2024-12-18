// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterClue",
    products: [
        .library(name: "TreeSitterClue", targets: ["TreeSitterClue"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterClue",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterClueTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterClue",
            ],
            path: "bindings/swift/TreeSitterClueTests"
        )
    ],
    cLanguageStandard: .c11
)
