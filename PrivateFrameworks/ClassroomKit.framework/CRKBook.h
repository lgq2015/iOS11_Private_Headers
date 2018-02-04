/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBook : NSObject <NSSecureCoding> {
    NSString * _author;
    bool  _hasChapters;
    NSData * _image;
    NSString * _path;
    NSString * _title;
    long long  _type;
    NSURL * _webURL;
}

@property (nonatomic, copy) NSString *author;
@property (nonatomic) bool hasChapters;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *webURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)author;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChapters;
- (id)image;
- (id)imageDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setAuthor:(id)arg1;
- (void)setHasChapters:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setWebURL:(id)arg1;
- (id)title;
- (long long)type;
- (id)webURL;

@end
