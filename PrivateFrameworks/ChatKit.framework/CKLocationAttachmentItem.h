/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationAttachmentItem : CKAttachmentItem {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSString * _locationTitle;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, copy) NSString *locationTitle;

+ (id)UTITypes;

- (void).cxx_destruct;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;
- (bool)isDroppedPin;
- (id)locationTitle;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLocationTitle:(id)arg1;
- (id)vCardURLProperties;

@end
