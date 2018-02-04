/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
 */

@interface IOAccelMemoryOpenGLInfo : NSObject {
    id  _expansionData;
    int  blamedProcess;
    NSString * debugLabel;
    int  name;
    NSString * objectDescription;
    unsigned long long  objectType;
    int  pid;
    NSString * sharegroup;
}

@property int blamedProcess;
@property (retain) NSString *debugLabel;
@property int name;
@property (retain) NSString *objectDescription;
@property unsigned long long objectType;
@property int pid;
@property (retain) NSString *sharegroup;

- (int)blamedProcess;
- (void)dealloc;
- (id)debugLabel;
- (id)description;
- (int)name;
- (id)objectDescription;
- (unsigned long long)objectType;
- (int)pid;
- (void)setBlamedProcess:(int)arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setName:(int)arg1;
- (void)setObjectDescription:(id)arg1;
- (void)setObjectType:(unsigned long long)arg1;
- (void)setPid:(int)arg1;
- (void)setSharegroup:(id)arg1;
- (id)sharegroup;

@end
