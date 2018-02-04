/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMiniHTMLParser : NSObject {
    NSString * __string;
    id /* block */  _parsedCharactersBlock;
    id /* block */  _parsedErrorBlock;
    id /* block */  _parsedMarkupElementEndBlock;
    id /* block */  _parsedMarkupElementStartBlock;
}

@property (nonatomic, readonly) NSString *_string;
@property (nonatomic, copy) id /* block */ parsedCharactersBlock;
@property (nonatomic, copy) id /* block */ parsedErrorBlock;
@property (nonatomic, copy) id /* block */ parsedMarkupElementEndBlock;
@property (nonatomic, copy) id /* block */ parsedMarkupElementStartBlock;

- (void).cxx_destruct;
- (id)_string;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;
- (id /* block */)parsedCharactersBlock;
- (id /* block */)parsedErrorBlock;
- (id /* block */)parsedMarkupElementEndBlock;
- (id /* block */)parsedMarkupElementStartBlock;
- (void)setParsedCharactersBlock:(id /* block */)arg1;
- (void)setParsedErrorBlock:(id /* block */)arg1;
- (void)setParsedMarkupElementEndBlock:(id /* block */)arg1;
- (void)setParsedMarkupElementStartBlock:(id /* block */)arg1;

@end
