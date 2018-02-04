/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKDetailsView : TLKView <TLKTextAreaViewTesting> {
    NSArray * _details;
    TLKObserver * _detailsObserver;
    TLKRichText * _footnote;
    TLKMultilineText * _secondaryTitle;
    TLKImage * _secondaryTitleImage;
    bool  _secondaryTitleIsDetached;
    TLKTextAreaView * _textAreaView;
    TLKRichText * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *details;
@property (retain) TLKObserver *detailsObserver;
@property (retain) TLKRichText *footnote;
@property (readonly) unsigned long long hash;
@property (retain) TLKMultilineText *secondaryTitle;
@property (retain) TLKImage *secondaryTitleImage;
@property bool secondaryTitleIsDetached;
@property (readonly) Class superclass;
@property (retain) TLKTextAreaView *textAreaView;
@property (retain) TLKRichText *title;

+ (id)detailsFont;

- (void).cxx_destruct;
- (void)dealloc;
- (id)details;
- (id)detailsObserver;
- (void)disableUnbatchedUpdates;
- (id)footnote;
- (id)footnoteLabelString;
- (id)init;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)performBatchUpdates:(id /* block */)arg1;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (bool)secondaryTitleIsDetached;
- (id)secondaryTitleLabelString;
- (void)setDetails:(id)arg1;
- (void)setDetailsObserver:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSecondaryTitleIsDetached:(bool)arg1;
- (void)setTextAreaView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)textAreaLabelStrings;
- (id)textAreaView;
- (id)title;
- (id)titleLabelString;
- (void)updateExistingDetailText:(id)arg1;

@end