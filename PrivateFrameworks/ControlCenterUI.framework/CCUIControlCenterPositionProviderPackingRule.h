/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying> {
    unsigned long long  _packFrom;
    unsigned long long  _packingOrder;
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _sizeLimit;
}

@property (nonatomic, readonly) unsigned long long packFrom;
@property (nonatomic, readonly) unsigned long long packingOrder;
@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } sizeLimit;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPackFrom:(unsigned long long)arg1 packingOrder:(unsigned long long)arg2 sizeLimit:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg3;
- (unsigned long long)packFrom;
- (unsigned long long)packingOrder;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })sizeLimit;

@end
