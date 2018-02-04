/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFDynamicURLImageResource : NSObject <NSCopying, NSSecureCoding, SFDynamicURLImageResource> {
    NSString * _formatURL;
    struct { 
        unsigned int pixelWidth : 1; 
        unsigned int pixelHeight : 1; 
        unsigned int supportsResizing : 1; 
    }  _has;
    NSArray * _imageOptions;
    double  _pixelHeight;
    double  _pixelWidth;
    bool  _supportsResizing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *formatURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *imageOptions;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsResizing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sf_replacementStringForPropertyEntryKey:(id)arg1 value:(id)arg2;
- (id)_sf_urlForSettings:(id)arg1 shouldResize:(bool)arg2 width:(double)arg3 height:(double)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formatURL;
- (bool)hasPixelHeight;
- (bool)hasPixelWidth;
- (bool)hasSupportsResizing;
- (id)imageOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (double)pixelHeight;
- (double)pixelWidth;
- (void)setFormatURL:(id)arg1;
- (void)setImageOptions:(id)arg1;
- (void)setPixelHeight:(double)arg1;
- (void)setPixelWidth:(double)arg1;
- (void)setSupportsResizing:(bool)arg1;
- (id)sf_urlForSettings:(id)arg1;
- (id)sf_urlForSettings:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)supportsResizing;

@end
