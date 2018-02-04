/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPressedItemContext : NSObject {
    bool  _active;
    HUElasticApplier * _applier;
    double  _beginTime;
    double  _currentViewScale;
    bool  _isUserInitiated;
    HFItem * _item;
    NSTimer * _programmaticBounceTimer;
    double  _rawInputProgress;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) HUElasticApplier *applier;
@property (nonatomic) double beginTime;
@property (nonatomic) double currentViewScale;
@property (nonatomic) bool isUserInitiated;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSTimer *programmaticBounceTimer;
@property (nonatomic) double rawInputProgress;

- (void).cxx_destruct;
- (id)applier;
- (double)beginTime;
- (double)currentViewScale;
- (bool)isActive;
- (bool)isUserInitiated;
- (id)item;
- (id)programmaticBounceTimer;
- (double)rawInputProgress;
- (void)setActive:(bool)arg1;
- (void)setApplier:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setCurrentViewScale:(double)arg1;
- (void)setIsUserInitiated:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setProgrammaticBounceTimer:(id)arg1;
- (void)setRawInputProgress:(double)arg1;

@end
