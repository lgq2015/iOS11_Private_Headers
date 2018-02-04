/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCImageAttachmentViewController : NCAttachmentViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    ISAnimatedImageView * _imageView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) ISAnimatedImageView *imageView;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
