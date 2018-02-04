/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKStackedCategoryValueSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _end;
    struct CGPoint { 
        double x; 
        double y; 
    }  _start;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } end;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } start;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (struct CGPoint { double x1; double x2; })end;
- (double)endXValue;
- (id)initWithStart:(struct CGPoint { double x1; double x2; })arg1 end:(struct CGPoint { double x1; double x2; })arg2 userInfo:(id)arg3;
- (struct CGPoint { double x1; double x2; })start;
- (double)startXValue;
- (id)userInfo;

@end
