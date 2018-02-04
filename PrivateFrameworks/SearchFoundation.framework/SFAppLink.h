/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFAppLink : NSObject <NSCopying, NSSecureCoding, SFAppLink> {
    SFPunchout * _appPunchout;
    struct { 
        unsigned int imageAlign : 1; 
    }  _has;
    SFImage * _image;
    int  _imageAlign;
    NSString * _title;
}

@property (nonatomic, retain) SFPunchout *appPunchout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appPunchout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImageAlign;
- (id)image;
- (int)imageAlign;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setAppPunchout:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
