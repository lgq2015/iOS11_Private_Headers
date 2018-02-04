/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySize;
    UIImage * _image;
    bool  _isInlineImage;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) struct CGSize { double x1; double x2; } displaySize;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isInlineImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (struct CGSize { double x1; double x2; })displaySize;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isInlineImage;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setIsInlineImage:(bool)arg1;
- (id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(struct CGPoint { double x1; double x2; })arg2;

@end
