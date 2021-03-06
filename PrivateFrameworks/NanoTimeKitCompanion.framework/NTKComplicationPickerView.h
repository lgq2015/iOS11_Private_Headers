/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationPickerView : NTKEditOptionPickerView {
    NSString * _complicationSlot;
    NSMutableDictionary * _controllersByComplication;
    <NTKComplicationPickerViewDataSource> * _dataSource;
    NSMutableDictionary * _displaysByComplication;
    NSMutableDictionary * _layoutRulesByComplication;
    NSMutableSet * _loadedComplications;
    bool  _needsReload;
    long long  _style;
}

@property (nonatomic, retain) NSString *complicationSlot;
@property (nonatomic) <NTKComplicationPickerViewDataSource> *dataSource;
@property (nonatomic, readonly) NTKComplication *selectedComplication;
@property (nonatomic, readonly) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_detachComplicationDisplays;
- (id)_displayByLoadingComplication:(id)arg1;
- (void)_loadComplication:(id)arg1;
- (void)_reloadLayoutForComplication:(id)arg1;
- (void)_willDisplayFaceView:(id)arg1;
- (id)complicationAtIndex:(unsigned long long)arg1;
- (id)complicationSlot;
- (id)dataSource;
- (void)dealloc;
- (id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2;
- (void)reloadIfNeeded;
- (id)selectedComplication;
- (id)selectedComplicationDisplay;
- (void)setComplicationSlot:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNeedsReload;
- (void)setStyle:(long long)arg1;
- (void)stealSelectedComplicationDisplay:(id*)arg1 controller:(id*)arg2;
- (long long)style;

@end
