/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLListCell : UITableViewCell {
    long long  _fileDepthLevel;
    NSString * _folderName;
    QLItem * _item;
    NSLayoutConstraint * _leftConstraint;
    long long  _loadingID;
    unsigned long long  _row;
    UILabel * _subtitle;
    NSString * _subtitleString;
    UIImage * _thumbnail;
    UIImageView * _thumbnailView;
    UILabel * _title;
}

@property (nonatomic) long long fileDepthLevel;
@property (nonatomic, retain) NSString *folderName;
@property (nonatomic, retain) QLItem *item;
@property unsigned long long row;
@property (nonatomic, copy) NSString *subtitleString;
@property (nonatomic, retain) UIImage *thumbnail;

+ (id)listCell;

- (void).cxx_destruct;
- (id)_folderImage;
- (void)awakeFromNib;
- (long long)fileDepthLevel;
- (id)folderName;
- (id)item;
- (void)prepareForReuse;
- (unsigned long long)row;
- (void)setFileDepthLevel:(long long)arg1;
- (void)setFolderName:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)subtitleString;
- (id)thumbnail;

@end
