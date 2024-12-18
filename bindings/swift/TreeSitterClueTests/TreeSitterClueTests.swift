import XCTest
import SwiftTreeSitter
import TreeSitterClue

final class TreeSitterClueTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_clue())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Clue grammar")
    }
}
