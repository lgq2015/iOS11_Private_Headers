/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLVariable : NSObject {
    int  _location;
    int  _size;
    unsigned int  _type;
}

@property (readonly) int location;
@property (readonly) int size;
@property (readonly) unsigned int type;
@property (readonly) unsigned int valueType;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2;
- (id)initWithType:(unsigned int)arg1 size:(int)arg2 location:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVariable:(id)arg1;
- (int)location;
- (int)size;
- (unsigned int)type;
- (unsigned int)valueType;

@end
