/* made by EzioChiu.
 */

@protocol CAMTimelapseMovieWriterProtocol <NSObject>

@required

- (bool)isSuspended;
- (void)setSuspended:(bool)arg1;
- (void)writeMovieFromImageFiles:(void *)arg1 visMetadataFiles:(void *)arg2 startDate:(void *)arg3 location:(void *)arg4 outputPath:(void *)arg5 transform:(void *)arg6 framesPerSecond:(void *)arg7 preferHEVC:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 16: NSArray *, NSArray *, NSDate *, CLLocation *, NSString *, struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, struct { long long x1; int x2; unsigned int x3; long long x4; }, NSArray *, void*

@end
