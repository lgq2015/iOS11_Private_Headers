/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate> {
    CHVisualizationManager * _chVisualizationManager;
    <PKVisualizationManager> * _delegate;
}

@property (nonatomic, retain) CHVisualizationManager *chVisualizationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKVisualizationManager> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognitionStatusReportingEnabled;
@property (readonly) Class superclass;

+ (id)availableRecognitionStatusKeys;
+ (id)localizedNameForRecognitionStatusKey:(id)arg1;

- (void).cxx_destruct;
- (id)chVisualizationManager;
- (void)dealloc;
- (id)delegate;
- (id)initWithRecognitionSession:(id)arg1;
- (bool)recognitionStatusReportingEnabled;
- (void)setChVisualizationManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecognitionStatusReportingEnabled:(bool)arg1;
- (id)valueForRecognitionStatusKey:(id)arg1;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)visualizationManagerDidUpdateSessionStatus:(id)arg1;
- (void)visualizationManagerNeedsDisplay:(id)arg1;

@end
