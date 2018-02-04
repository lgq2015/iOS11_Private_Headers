/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleActivity : UIActivity {
    UIImage * _activityImage;
    NSArray * _activityItems;
    NSString * _activityTitle;
    NSString * _activityType;
    id /* block */  _performBlock;
}

@property (nonatomic, retain) NSArray *activityItems;
@property (nonatomic, readonly, copy) id /* block */ performBlock;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityItems;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(id /* block */)arg4;
- (void)performActivity;
- (id /* block */)performBlock;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityItems:(id)arg1;

@end
