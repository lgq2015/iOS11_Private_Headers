/* made by EzioChiu.
 */

@protocol SFDigestOperationInternal <SFDigestOperation>

@required

- (const struct __CFString { }*)_secKeyECDSAAlgorithm;

@optional

- (const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); }*)_ccDigestInfo;

@end
