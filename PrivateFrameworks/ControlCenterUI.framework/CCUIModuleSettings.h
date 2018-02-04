/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModuleSettings : NSObject <NSCopying> {
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _landscapeLayoutSize;
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _portraitLayoutSize;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPortraitLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg1 landscapeLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })layoutSizeForInterfaceOrientation:(long long)arg1;

@end
