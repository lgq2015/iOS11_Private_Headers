/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUFileOutputBundle : NSObject <GQUOutputBundle> {
    struct __CFURL { } * mOutputUrl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString { }*)createUriForResource:(struct __CFString { }*)arg1;
- (void)dealloc;
- (id)initWithOutputPath:(struct __CFString { }*)arg1;
- (bool)setData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 forNamedResource:(struct __CFString { }*)arg3;
- (bool)setDataForMainHtmlResource:(struct __CFData { }*)arg1;
- (void)setDocumentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPageElementXPath:(struct __CFString { }*)arg1 withThumbnailsOnLeft:(bool)arg2;

@end
