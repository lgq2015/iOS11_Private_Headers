/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoControlManager : NSObject {
    bool  _autoHidingEnabled;
    <SXVideoControlManagerDelegate> * _delegate;
    double  _duration;
    NSArray * _items;
    double  _time;
    SXTimeline * _timeline;
}

@property (nonatomic) bool autoHidingEnabled;
@property (nonatomic) <SXVideoControlManagerDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) double time;
@property (nonatomic, readonly) SXTimeline *timeline;

- (void).cxx_destruct;
- (bool)autoHidingEnabled;
- (id)delegate;
- (double)duration;
- (void)ensureAllItemsAreVisible;
- (void)ensureHideableItemsAreHidden;
- (void)ensureItemsAreHidden:(id)arg1;
- (void)ensureItemsAreVisible:(id)arg1;
- (id)init;
- (id)items;
- (id)itemsPassingTest:(id /* block */)arg1;
- (void)scheduleAutoHideTimelineIfEnabled;
- (void)setAutoHidingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setItems:(id)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (id)timeline;
- (void)toggleVisibility;
- (void)updateAutoAppearanceTimelineForItems:(id)arg1;

@end
