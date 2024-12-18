/**
 * @file Clue grammar for tree-sitter
 * @author MarkosTh09
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: "clue",

    rules: {
        program: $ => "hello",
    },
});
