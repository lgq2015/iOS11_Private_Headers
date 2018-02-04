/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSURLActionPickerItem : BCSActionPickerItem {
    LSAppLink * _appLink;
    LSApplicationProxy * _applicationProxy;
    NSURL * _url;
}

@property (nonatomic, readonly) LSAppLink *appLink;

- (void).cxx_destruct;
- (id)actionURL;
- (id)appLink;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationProxy:(id)arg4;
- (void)performAction;
- (void)performActionWithFBOptions:(id)arg1;
- (id)targetApplicationBundleIdentifier;

@end
