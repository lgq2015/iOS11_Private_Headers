/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTimeWindowStrokeGroup : CHStrokeGroup {
    double  _endTimestamp;
    double  _startTimestamp;
}

@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic, readonly) double startTimestamp;

- (double)endTimestamp;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 startTimestamp:(double)arg6 endTimestamp:(double)arg7;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 startTimestamp:(double)arg5 endTimestamp:(double)arg6;
- (double)startTimestamp;

@end
