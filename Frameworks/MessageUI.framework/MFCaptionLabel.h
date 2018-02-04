/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCaptionLabel : UILabel {
    NSArray * _bccRecipients;
    NSArray * _ccRecipients;
    <MFCaptionLabelDataSource> * _dataSource;
    NSArray * _fromSenders;
    bool  _needsLabelUpdate;
    NSArray * _toRecipients;
}

@property (nonatomic, retain) NSArray *bccRecipients;
@property (nonatomic, retain) NSArray *ccRecipients;
@property (nonatomic) <MFCaptionLabelDataSource> *dataSource;
@property (nonatomic, retain) NSArray *fromSenders;
@property (nonatomic, retain) NSArray *toRecipients;

- (void).cxx_destruct;
- (void)_setNeedsLabelUpdate;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)dataSource;
- (void)dealloc;
- (id)fromSenders;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBccRecipients:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFromSenders:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (id)toRecipients;
- (void)updateLabelNow;

@end
