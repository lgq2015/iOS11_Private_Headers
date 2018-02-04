/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderResource : TSCH3DResource {
    TSCH3DShaderProgram * mProgram;
}

@property (nonatomic, readonly) TSCH3DShaderProgram *program;

+ (struct pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *> > { struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x_1_2_1; char *x_1_2_2; } x_1_1_1; } x1; struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x_1_2_1; char *x_1_2_2; } x_2_1_1; } x2; })stringsFromBuffer:(id)arg1;

- (void)appendShaderResourceString:(struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x_1_1_1; char *x_1_1_2; } x1; })arg1 toDataBuffer:(id)arg2;
- (void)dealloc;
- (id)get;
- (id)initWithCaching:(int)arg1;
- (id)initWithCaching:(int)arg1 version:(id)arg2;
- (id)program;
- (struct IteratorRange<const char *> { struct pair<const char *, const char *> { char *x_1_1_1; char *x_1_1_2; } x1; })resourceStringOfString:(id)arg1;

@end
