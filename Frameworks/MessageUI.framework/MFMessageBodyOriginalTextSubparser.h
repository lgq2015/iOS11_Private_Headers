/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
    bool  _foundForwardSeparator;
    bool  _foundText;
    id /* block */  _foundTextBlock;
    id /* block */  _foundWhitespaceBlock;
    <MFMessageBodyElement_Private> * _lastNonWhitespaceTextElement;
    NSMutableArray * _lastTextElements;
}

- (void)_consumeAnyLastTextElementAsAttribution:(bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(bool)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)setFoundTextBlock:(id /* block */)arg1;
- (void)setFoundWhitespaceBlock:(id /* block */)arg1;

@end
