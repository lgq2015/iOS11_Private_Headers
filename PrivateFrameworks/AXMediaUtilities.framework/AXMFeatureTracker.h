/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMFeatureTracker : NSObject {
    AXMVisionFeature * _backingFeature;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentLocation;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentLocation;
@property (nonatomic, readonly) unsigned long long faceId;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *value;

+ (id)trackerWithFeature:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentLocation;
- (id)description;
- (unsigned long long)faceId;
- (id)initWithFeature:(id)arg1;
- (unsigned long long)type;
- (void)update:(id)arg1;
- (id)value;

@end
