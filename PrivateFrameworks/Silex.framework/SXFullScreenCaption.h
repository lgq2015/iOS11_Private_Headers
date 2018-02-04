/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullScreenCaption : NSObject <SXTextSourceDataSource> {
    SXFormattedText * _caption;
    NSString * _text;
    <SXTextSourceDataSource> * _textSourceDataSource;
}

@property (nonatomic, readonly) SXFormattedText *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) <SXTextSourceDataSource> *textSourceDataSource;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (id)caption;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)initWithCaption:(id)arg1 textSourceDataSource:(id)arg2;
- (id)initWithText:(id)arg1 textSourceDataSource:(id)arg2;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)text;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textSourceDataSource;
- (id)textStyleForTextSource:(id)arg1;

@end
