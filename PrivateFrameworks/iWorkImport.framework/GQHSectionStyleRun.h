/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHSectionStyleRun : NSObject {
    struct { 
        long long location; 
        long long length; 
    }  mPageRange;
    GQDSStyle * mStyle;
}

- (void)dealloc;

@end
