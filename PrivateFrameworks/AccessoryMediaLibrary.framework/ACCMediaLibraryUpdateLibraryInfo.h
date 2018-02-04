/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface ACCMediaLibraryUpdateLibraryInfo : NSObject {
    NSString * _mediaLibraryUID;
    NSString * _name;
    int  _type;
}

@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)copyDict;
- (id)description;
- (void)fillStruct:(struct { char *x1; char *x2; int x3; }*)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 name:(id)arg2 type:(int)arg3;
- (id)mediaLibraryUID;
- (id)name;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (bool)supportsSecureCoding;
- (int)type;

@end
