/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionEntry : NSObject {
    NSData * assetData;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * key;
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * keyFormat;
    TDRenditionSpec * renditionSpec;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  stackKey;
}

@property (nonatomic, readonly, retain) NSData *assetData;
@property (nonatomic, readonly, retain) TDRenditionSpec *renditionSpec;

- (id)assetData;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 keyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4;
- (id)renditionSpec;

@end
