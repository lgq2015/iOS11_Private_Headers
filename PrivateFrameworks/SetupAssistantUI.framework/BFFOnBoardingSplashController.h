/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFOnBoardingSplashController : BFFSplashController {
    id /* block */  _completion;
    bool  _extendBackgroundColorToNavigationBar;
    long long  _feature;
    bool  _movieShowing;
    double  _placeholderDuration;
    NSDate * _placeholderStartDate;
    NSString * _preferenceKey;
    NSDate * _videoStartDate;
}

@property (nonatomic, copy) id /* block */ completion;
@property bool extendBackgroundColorToNavigationBar;
@property (nonatomic) long long feature;
@property bool movieShowing;
@property double placeholderDuration;
@property (retain) NSDate *placeholderStartDate;
@property (retain) NSString *preferenceKey;
@property (retain) NSDate *videoStartDate;

+ (id)cloudConfigSkipKey;
+ (void)needsToRunForFeature:(long long)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)extendBackgroundColorToNavigationBar;
- (long long)feature;
- (id)initWithFeature:(long long)arg1;
- (void)loadView;
- (void)movieReady:(id)arg1 error:(id)arg2;
- (bool)movieShowing;
- (id)movieView;
- (double)placeholderDuration;
- (id)placeholderStartDate;
- (id)preferenceKey;
- (void)setCompletion:(id /* block */)arg1;
- (void)setExtendBackgroundColorToNavigationBar:(bool)arg1;
- (void)setFeature:(long long)arg1;
- (void)setMovieShowing:(bool)arg1;
- (void)setPlaceholderDuration:(double)arg1;
- (void)setPlaceholderStartDate:(id)arg1;
- (void)setPreferenceKey:(id)arg1;
- (void)setVideoStartDate:(id)arg1;
- (id)videoStartDate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
