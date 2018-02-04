/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentPropertiesTableViewSection : NSObject <MSCLSettingsTableViewCellDelegate, MSCLTokenTextViewDelegate, UITextFieldDelegate> {
    SKUIClientContext * _clientContext;
    bool  _isExplicit;
    <MSCLAttachmentPropertiesTableViewSectionDelegate> * _sectionDelegate;
    double  _sectionHeaderHeight;
    long long  _sectionType;
    NSArray * _tableViewCells;
    MSCLVideoCoverImageSelectionView * _videoCoverImageView;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MSCLAttachmentPropertiesTableViewSectionDelegate> *sectionDelegate;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) long long sectionType;
@property (nonatomic, readonly) UIImage *selectedCoverImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newTableViewCellWithContentView:(id)arg1;
- (id)_newTextFieldCellWithTitle:(id)arg1 placeholder:(id)arg2 value:(id)arg3;
- (id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3;
- (id)_newTextViewCellWithTitle:(id)arg1 placeholder:(id)arg2 artists:(id)arg3 changeDelegate:(id)arg4;
- (id)clientContext;
- (void)commitValuesToAttachment:(id)arg1;
- (id)initWithSectionType:(long long)arg1 clientContext:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)resignFirstResponder;
- (id)sectionDelegate;
- (double)sectionHeaderHeight;
- (long long)sectionType;
- (id)selectedCoverImage;
- (void)setCoverImage:(id)arg1;
- (void)setSectionDelegate:(id)arg1;
- (void)setTableCellsWithAttachment:(id)arg1 configuration:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewCell:(id)arg1 valueChanged:(bool)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textView:(id)arg1 didChange:(long long)arg2;
- (id)tokenTextViewForRowAtIndexPath:(id)arg1;

@end
