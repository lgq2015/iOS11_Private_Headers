/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialCardLayout : NSObject {
    NSMutableArray * _allLockups;
    SKUILockupViewElement * _primaryLockup;
    struct CGSize { 
        double width; 
        double height; 
    }  _primaryLockupSize;
    double  _secondaryLockupWidth;
}

@property (nonatomic, readonly) NSArray *allLockups;
@property (nonatomic, readonly) SKUILockupViewElement *primaryLockup;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } primaryLockupSize;
@property (nonatomic, readonly) double secondaryLockupWidth;

- (void).cxx_destruct;
- (id)allLockups;
- (id)initWithCard:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)primaryLockup;
- (struct CGSize { double x1; double x2; })primaryLockupSize;
- (double)secondaryLockupWidth;

@end
