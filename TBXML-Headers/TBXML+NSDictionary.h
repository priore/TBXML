#import "TBXML.h"

@interface TBXML (TBXML_NSDictionary)
+ (NSDictionary*)dictionaryWithXMLNode:(TBXMLElement*)element;
+ (NSDictionary*)dictionaryWithXMLData:(NSData*)data;
@end