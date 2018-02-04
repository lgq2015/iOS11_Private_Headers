/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFContentSniffer : NSObject

+ (id)MIMETypeForData:(id)arg1;
+ (id)MIMETypeForData:(id)arg1 andString:(id)arg2;
+ (id)MIMETypeForString:(id)arg1;
+ (bool)MIMETypeIsHTMLOrText:(id)arg1;
+ (bool)isGIF:(id)arg1;
+ (bool)isHTML:(id)arg1;
+ (bool)isJPEG:(id)arg1;
+ (bool)isOctetStream:(id)arg1;
+ (bool)isPDF:(id)arg1;
+ (bool)isPNG:(id)arg1;
+ (bool)isSWF:(id)arg1;
+ (bool)isWord:(id)arg1;
+ (bool)isXHTML:(id)arg1;
+ (bool)isXML:(id)arg1;

@end
