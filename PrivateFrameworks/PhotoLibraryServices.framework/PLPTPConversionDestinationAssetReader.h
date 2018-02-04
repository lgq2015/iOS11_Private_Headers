/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {
    PHMediaFormatConversionDestination * _destination;
}

@property (retain) PHMediaFormatConversionDestination *destination;

- (void).cxx_destruct;
- (id)dataSourcePathForDataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)destination;
- (id)initWithDestination:(id)arg1;
- (id)path;
- (void)setDestination:(id)arg1;

@end
