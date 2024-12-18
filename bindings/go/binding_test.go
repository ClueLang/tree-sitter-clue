package tree_sitter_clue_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_clue "github.com/tree-sitter/tree-sitter-clue/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_clue.Language())
	if language == nil {
		t.Errorf("Error loading Clue grammar")
	}
}
