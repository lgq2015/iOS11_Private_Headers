/* made by EzioChiu.
 */

@protocol GEODataStateCapturing <NSObject>

@required

- (NSData *)captureStateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
