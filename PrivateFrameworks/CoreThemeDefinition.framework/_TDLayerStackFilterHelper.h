/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface _TDLayerStackFilterHelper : NSObject {
    NSMutableArray * _excludedDirections;
    NSMutableArray * _excludedHorizontalSizeClasses;
    NSMutableArray * _excludedIdioms;
    NSMutableArray * _excludedLayers;
    NSMutableArray * _excludedPresentationStates;
    NSMutableArray * _excludedScaleFactors;
    NSMutableArray * _excludedSizes;
    NSMutableArray * _excludedStates;
    NSMutableArray * _excludedSubtypes;
    NSMutableArray * _excludedValues;
    NSMutableArray * _excludedVerticalSizeClasses;
    TDLayerStackRenditionSpec * _layerStackRendition;
}

@property (nonatomic, retain) NSMutableArray *excludedDirections;
@property (nonatomic, retain) NSMutableArray *excludedHorizontalSizeClasses;
@property (nonatomic, retain) NSMutableArray *excludedIdioms;
@property (nonatomic, retain) NSMutableArray *excludedLayers;
@property (nonatomic, retain) NSMutableArray *excludedPresentationStates;
@property (nonatomic, retain) NSMutableArray *excludedScaleFactors;
@property (nonatomic, retain) NSMutableArray *excludedSizes;
@property (nonatomic, retain) NSMutableArray *excludedStates;
@property (nonatomic, retain) NSMutableArray *excludedSubtypes;
@property (nonatomic, retain) NSMutableArray *excludedValues;
@property (nonatomic, retain) NSMutableArray *excludedVerticalSizeClasses;
@property (nonatomic, retain) TDLayerStackRenditionSpec *layerStackRendition;

- (bool)allowKey:(id)arg1;
- (void)dealloc;
- (void)establishExclusionsWithHelper:(id)arg1 idioms:(id)arg2 sizeClasses:(id)arg3;
- (id)excludedDirections;
- (id)excludedHorizontalSizeClasses;
- (id)excludedIdioms;
- (id)excludedLayers;
- (id)excludedPresentationStates;
- (id)excludedScaleFactors;
- (id)excludedSizes;
- (id)excludedStates;
- (id)excludedSubtypes;
- (id)excludedValues;
- (id)excludedVerticalSizeClasses;
- (id)init;
- (id)layerStackRendition;
- (void)setExcludedDirections:(id)arg1;
- (void)setExcludedHorizontalSizeClasses:(id)arg1;
- (void)setExcludedIdioms:(id)arg1;
- (void)setExcludedLayers:(id)arg1;
- (void)setExcludedPresentationStates:(id)arg1;
- (void)setExcludedScaleFactors:(id)arg1;
- (void)setExcludedSizes:(id)arg1;
- (void)setExcludedStates:(id)arg1;
- (void)setExcludedSubtypes:(id)arg1;
- (void)setExcludedValues:(id)arg1;
- (void)setExcludedVerticalSizeClasses:(id)arg1;
- (void)setLayerStackRendition:(id)arg1;

@end
