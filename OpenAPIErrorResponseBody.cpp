/**
 * Multiplay SDK Daemon Game Server API
 * The game server API is called by the Multiplay Game Server SDK itself to subscribe to events and report server status.
 *
 * OpenAPI spec version: 1.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIErrorResponseBody.h"

#include "MultiplayGameServerSDKModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace Multiplay
{

void OpenAPIErrorResponseBody::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status);
	Writer->WriteIdentifierPrefix(TEXT("detail")); WriteJsonValue(Writer, Detail);
	Writer->WriteIdentifierPrefix(TEXT("title")); WriteJsonValue(Writer, Title);
	Writer->WriteObjectEnd();
}

bool OpenAPIErrorResponseBody::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("detail"), Detail);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("title"), Title);

	return ParseSuccess;
}

}