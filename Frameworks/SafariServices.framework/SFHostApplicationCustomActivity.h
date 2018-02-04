/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFHostApplicationCustomActivity : _SFActivity {
    SFCustomActivityProxy * _activityProxy;
}

@property (nonatomic, readonly) SFCustomActivityProxy *activityProxy;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityProxy;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithActivityProxy:(id)arg1;

@end
