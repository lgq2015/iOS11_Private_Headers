/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis * mAxis;
    TSCH3DAxisLabelKind * mKind;
}

@property (nonatomic, readonly) TSCH3DAxisLabelKind *kind;

+ (id)enumeratorWithAxis:(id)arg1 kind:(id)arg2;

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithAxis:(id)arg1 kind:(id)arg2;
- (id)kind;
- (int)labelPosition;
- (bool)shouldRender;
- (id)string;
- (id)stringForLabelResources:(id)arg1;
- (void)update;

@end
