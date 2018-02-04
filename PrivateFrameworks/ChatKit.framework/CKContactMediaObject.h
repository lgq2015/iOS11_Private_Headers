/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactMediaObject : CKCardMediaObject {
    ABVCardRecord * _vCard;
    UIImage * _vCardImage;
    bool  _vCardParsingFailed;
}

@property (nonatomic, retain) ABVCardRecord *vCard;
@property (nonatomic, retain) UIImage *vCardImage;
@property (nonatomic) bool vCardParsingFailed;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bbSize;
- (Class)coloredBalloonViewClass;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)icon;
- (int)mediaType;
- (void)setVCard:(id)arg1;
- (void)setVCardImage:(id)arg1;
- (void)setVCardParsingFailed:(bool)arg1;
- (id)subtitle;
- (id)title;
- (id)vCard;
- (id)vCardImage;
- (id)vCardImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)vCardParsingFailed;

@end
